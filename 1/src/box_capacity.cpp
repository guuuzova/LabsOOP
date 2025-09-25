#include "box_capacity.h"


namespace Timaty{
    namespace {
        constexpr int Foot = 12;
        constexpr int Block = 16;
    }
    long long BoxCapacity(int length, int width, int height) {
        if (length < 0 || width < 0 || height < 0) {
            return 0;
        }
        long long length_num = (length * Foot) / Block;
        long long width_num = (width * Foot) / Block;
        long long height_num = (height * Foot) / Block;
        return length_num * width_num * height_num;
    }
}