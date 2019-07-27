#include "git_api.h"

#include <Godot.hpp>

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o) {

	godot::Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_singleton(godot_gdnative_init_options *o) {

	godot::Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o) {

    godot::Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle) {

    godot::Godot::nativescript_init(handle);
	godot::Godot::print("nativescript_init is done!");
	godot::register_class<godot::GitAPI>();

	new godot::GitAPI();
}
