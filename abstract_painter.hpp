@@ -1,8 +1,9 @@
#pragma once
#include "point.hpp"
#include <string>
#include <vector>

struct AbstractPainter {
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0;  
    virtual void WriteText(Point position, char* text) = 0;                      
    virtual void DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) = 0;
    virtual void WriteText(Point position, const std::string& text) = 0;
