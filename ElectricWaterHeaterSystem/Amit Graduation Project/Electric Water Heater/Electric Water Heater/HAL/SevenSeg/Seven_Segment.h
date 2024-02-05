/*
 * Seven_Segment.h
 *
 * Created: 9/23/2023 12:49:30 PM
 *  Author: umohs
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#define SS_1D(reg, num) reg=(reg & 0xf0) | (num & 0x0f)
#define SS_2D(reg, num) reg=(reg & 0x0f) | (num << 4)



#endif /* SEVEN_SEGMENT_H_ */