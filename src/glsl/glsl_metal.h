#pragma once
#ifndef GLSL_METAL_H
#define GLSL_METAL_H

struct glsl_metal_binding
{
	const char*	name;
	int			location;
};

struct glsl_metal_binding_table
{
	const glsl_metal_binding*	bindings;
	int							count;
};

#endif /* GLSL_METAL_H */
