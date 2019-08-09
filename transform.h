//
// Created by WangZhe on 2019/8/8.
//

#ifndef TEST_GITHUB_DCT_TRANSFORM_H
#define TEST_GITHUB_DCT_TRANSFORM_H
float **malloc2d(int);
void free_mat2d(float **, int);
void dct(float **, float **, int);
void idct(float **, float **, int);
void quantize(float **, float **, int, int);
void dequantize(float **, float **, int, int);
#endif //TEST_GITHUB_DCT_TRANSFORM_H
