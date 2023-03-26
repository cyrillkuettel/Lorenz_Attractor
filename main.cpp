#include "LorenzAttractor.h"
#include <Graphics.hpp>

int main()
{
  /// Create a window
  
    bool isFullscreen = true;
    sf::RenderWindow window;

	window.create(sf::VideoMode(1980, 1080), "Coding Projects", (isFullscreen ? sf::Style::Fullscreen : sf::Style::Default), sf::ContextSettings());
	window.setPosition(sf::Vector2i(0, 0));

    window.setVerticalSyncEnabled(true); 
	window.setFramerateLimit(60);
  
  
  /// Important part is here
  
  LorenzAttractor.run(window);
}
