

#include "image_filter.h"

void image_filter(AXI_STREAM& INPUT_STREAM, AXI_STREAM& OUTPUT_STREAM) {

//------------------------------- Soecifying the Axistream  ---------------------
#pragma HLS INTERFACE axis port=INPUT_STREAM bundle=VIDEO_IN
#pragma HLS INTERFACE axis port=OUTPUT_STREAM bundle=VIDEO_OUT

//------------------------------- Setup for Algorithm ---------------------------
const int rows = MAX_HEIGHT;
const int cols = MAX_WIDTH;
RGB_IMAGE  img_0  (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_1 (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_1a (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_1b (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_2 (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_3 (MAX_HEIGHT, MAX_WIDTH);
GRAY_IMAGE img_4 (MAX_HEIGHT, MAX_WIDTH);
RGB_IMAGE  img_5 (MAX_HEIGHT, MAX_WIDTH);

#pragma HLS dataflow // enable Pipelining

// Convert AXI4 Stream data to hls::mat format
hls::AXIvideo2Mat(INPUT_STREAM, img_0);

//---------------------------- Implemented filter ------------------------------
hls::CvtColor<HLS_RGB2GRAY>(img_0, img_1);
hls::cv
//hls::BoxFilter<3,3>(img_1, img_2);
//hls::GaussianBlur<5,5>(img_1, img_2);
//hls::Duplicate(img_1,img_1a,img_1b);
//hls::Sobel<1,0,5>(img_1a, img_2);
//hls::Sobel<0,1,5>(img_1b, img_3);
//hls:AddWeighted(img_2,0.5,img_3,0.5,0.0,img_4);
//hls::CvtColor<HLS_GRAY2RGB>(img_2, img_5);
//--------------------------------------------------------------------------------
hls::Mat2AXIvideo(img_1, OUTPUT_STREAM);
}

