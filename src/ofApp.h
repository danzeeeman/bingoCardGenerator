#pragma once

#include "ofMain.h"
#include "ofxTextSuite.h"
#include "ofxGui.h"
class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void makeBingoCard();
    void keyPressed(int key);

    float width, height;
    vector<ofxTextBlock>        words;
    TextBlockAlignment  alignment;  //constants for controlling state
    
    ofFbo fbo;
    ofBufferObject pixelBufferBack, pixelBufferFront;
    ofPixels pixels;
    ofParameterGroup BingoCard;
    ofParameter<float> lineWidth;
    ofParameter<bool> record;
    ofParameter<bool> bMakeCards;
    ofxPanel panel;
    vector<string> wordlist;
    vector<string> used;
    int count;
};
