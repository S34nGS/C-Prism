#include "raylib.h"
// TODO: include your own headers as you create them
//       (AudioPlayer, Analyzer, Visualizer)
#include "audio/AudioPlayer.h"
#include "dsp/Analyzer.h"
#include "render/Visualizer.h"

int main() {
    // --- setup ---
    // TODO: pick a window size and open a window
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Main window");

    // TODO: cap the frame rate
    SetTargetFPS(60);

    // TODO: create the AudioPlayer, load assets/test.mp3, handle failure
    // TODO: create the Analyzer (what does it need to know? think sample rate, FFT size, band count)
    // TODO: create the Visualizer

    // TODO: start playback

    // --- main loop ---
    // TODO: loop until the window should close
    //   1. Analyzer: grab the latest samples and update the band values
    //   2. Begin drawing, clear the background
    //   3. Visualizer: draw the band values
    //   4. End drawing

    // --- cleanup ---
    // TODO: stop audio, close the window
    //       (think: who owns what? what order should things be destroyed in?)

    return 0;
}