//
//  signalprocessing.h
//  PDScores
//
//  Created by Erin Mounts on 2/9/15.
//  (CC BY-SA 3.0) Sage Bionetworks, 2015.
//

#ifndef __SIGNALPROCESSING__
#define __SIGNALPROCESSING__

#include <Accelerate/Accelerate.h>

void sp_hanning(double *outBuf, unsigned long windowSize);
void sp_hamming(double *outBuf, unsigned long windowSize);
void spectrogram(DOUBLE_COMPLEX *outFourierTransform, double *outFrequencies, double *outTimes, double *inSignal, unsigned long signalSize, double *window, unsigned long overlap, unsigned long windowSize, double samplingRate);

void fft(const double *inSignal, size_t signalLength, DOUBLE_COMPLEX *outDFT);

#endif