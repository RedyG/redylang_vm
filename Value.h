#pragma once
#include <stdint.h>

typedef struct {
	uint32_t size;
} Type;

typedef struct {
	Type* type;
	union {
		uint64_t u64;
		int64_t i64;
		uint32_t u32;
		int32_t i32;
		float f32;
		double f64;

		uint8_t* ptr;
	};
} Value;