#include <algorithm>

#include "Palette.h"
#include "PaletteFile.h"
#include "PaletteName.h"

Palette::Palette()
{
	// Set all colors to black by default.
	this->colors.fill(Color::Black);
}

bool Palette::isBuiltIn(const std::string &filename)
{
	const std::string &builtInName = PaletteFile::fromName(PaletteName::BuiltIn);
	return filename == builtInName;
}

std::array<Color, 256> &Palette::get()
{
	return this->colors;
}

const std::array<Color, 256> &Palette::get() const
{
	return this->colors;
}
