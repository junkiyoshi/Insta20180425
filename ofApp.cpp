#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(60);
	ofBackground(239);
	ofSetWindowTitle("Insta");

	ofSetColor(39);
	ofSetLineWidth(2);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	int radius = 250;
	int line_length = 380;
	for (int y = -ofGetHeight() / 2; y <= ofGetHeight() / 2; y += 5) {

		int x_start = ofNoise(y * 0.02 + ofGetFrameNum() * 0.01) * -line_length;
		for (int x = x_start; x <= x_start + line_length; x += 1) {

			if (ofPoint(x, y).length() > radius) {

				ofDrawLine(ofPoint(x, y), ofPoint(x + 1, y));
			}
		}
	}
}

//--------------------------------------------------------------
int main() {

	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}