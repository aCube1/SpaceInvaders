#include "engine.hpp"

#include "constants.hpp"

using game::Engine;

Engine::Engine() {
	this->window.create(
		sf::VideoMode(constants::window_width, constants::window_height),
		constants::window_title, sf::Style::Titlebar | sf::Style::Close
	);

	this->window.setVerticalSyncEnabled(true);
}

Engine::~Engine() {}

void Engine::process_events() {
	sf::Event event;

	while (this->window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			this->running = false;
		}
	}
}

void Engine::update() {}

void Engine::render() {
	this->window.clear();
	this->window.display();
}
