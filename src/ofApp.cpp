#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);

    rgbaFbo.allocate(400, 400, GL_RGBA);

    #ifdef TARGET_OPENGLES
    rgbaFboFloat.allocate(400, 400, GL_RGBA);
    #else
    rgbaFboFloat.allocate(400, 400, GL_RGBA32F_ARB);
    #endif

    // fboのクリア
    // 理由: メモリに入っていた値が表示されないように、一旦すべてのfboをクリアする必要があ
    // なお、fbo内で何かを描画したいときはいつでもfbo.begin()〜fbo.end()内にコードを書く必要がある

    rgbaFbo.begin();
    ofColor(255, 255, 255, 0);
    rgbaFbo.end();

    rgbaFboFloat.begin();
    ofClear(255, 255, 255, 0);
    rgbaFboFloat.end();
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::drawFboTest() {

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
