#include "git_api.h"

#include <ClassDB.hpp>

namespace godot {

void GitAPI::_register_methods() {

	register_method("_process", &GitAPI::_process);
	register_method("get_vcs_name", &GitAPI::initialize);
	register_method("get_commit_dock_panel_container", &GitAPI::get_commit_dock_panel_container);
	register_method("get_initialization_settings_panel_container", &GitAPI::get_initialization_settings_panel_container);
	register_method("shut_down", &GitAPI::shut_down);
	register_method("get_project_name", &GitAPI::get_project_name);
	register_method("get_vcs_name", &GitAPI::get_vcs_name);

}

void GitAPI::get_commit_dock_panel_container() {
}

void GitAPI::get_initialization_settings_panel_container() {
}

String GitAPI::get_project_name() {

	return String("project");
}

String GitAPI::get_vcs_name() {

	WARN_PRINT("VCS Name is return as Git");
	return "Git";
}

bool GitAPI::initialize(const String project_root_path) {

	return false;
}

bool GitAPI::shut_down() {

	return false;
}

void GitAPI::_init() {
}

void GitAPI::_process() {
}

GitAPI::GitAPI() {

	WARN_PRINT("Init");
	WARN_PRINT("called submit");
	this->call<Node *>("submit_vcs_addon", this);
}

GitAPI::~GitAPI() {
}

}
