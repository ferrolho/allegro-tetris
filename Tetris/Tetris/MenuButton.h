#pragma once

#include "stdIncludes.h"

class MenuButton
{
public:
	MenuButton(string Label, bool IsThisTheTitle = false, ALLEGRO_COLOR Color = White);

	void setLabel(string Label) { label = Label; }
	void setYPos(int YPos);

	bool isBeingHovered();
	bool wasPressed();

	int getYPos() { return y_pos; }
	int getP1_Y() { return p1_y; }
	int getP2_Y() { return p2_y; }

	void drawButton();

	~MenuButton(void);

private:
	string label;

	int y_pos;
	int p1_x, p1_y;
	int p2_x, p2_y;

	bool isTitle;
	bool hovered;
	bool pressed;

	ALLEGRO_COLOR button_color;
	ALLEGRO_FONT *font;
};