#pragma once

#include "ofMain.h"
#include "ofxMSATensorFlow.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        // shared pointer to tensorflow::Session
        // This is using the lower level C API
        // For the higer level C++ API (using msa::tf::SimpleModel) see example-pix2pix-simple
        msa::tf::Session_ptr session;		
};
