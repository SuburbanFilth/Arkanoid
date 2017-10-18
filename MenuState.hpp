#pragma once

#include "State.hpp"
#include "Button.hpp"

enum class ButtonPressed {
    NewGame = 0,
    SaveGame,
    Options,
    Quit
};

class MenuState : public State {
public:
    MenuState();
    ~MenuState();

    void Update(sf::RenderWindow& l_window);
    void Render(sf::RenderWindow& l_window);
    void HandleInput(sf::RenderWindow& l_window);

    sf::Vector2i m_mousePosition;
    bool m_pressed;
    bool m_buttonPressed[4];

private:
    sf::RectangleShape m_background;
    Button m_buttonNewGame;
    Button m_buttonSaveGame;
    Button m_buttonOptions;
    Button m_buttonQuitGame;
    
};