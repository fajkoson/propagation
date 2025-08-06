#pragma once

#ifdef PROPAGATE_EXPORTS
#define PROPAGATE_API __declspec(dllexport)
#else
#define PROPAGATE_API __declspec(dllimport)
#endif

extern PROPAGATE_API int propagate_variable;
PROPAGATE_API const char* get_propagate_message();