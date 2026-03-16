#include "velocis.h"
#include <math.h>

int main(int argc, char *argv[])
{
  int width = 800;
  int height = 600;

  Velocis *screen = velocisWindow(width, height, "Velocis Graphics Lib - Open Window")

  while (!velosisClosed(screen))
    {
        velosisClear(screen, velosisRGB(0, 30, 30));
      
        int cx = width / 2;
        int cy = height / 2;

      for (float t = 0; t < 10.38f; t += 0.005f)
        {
          float x = 25 * pow(sin(t), 3);
          float y = -(13*cos(t) - 5*cos(2*t) - 2*cos(3*t) - cos(4*t));

          int px = cx + (int)(x * 12);
          int py = cy + (int)(y * 12);

          velosisPlot(screen, px, py, velosisRGB(255, 40, 40));
        }
      velosisPrint(screen, tfont, 10, 10, velosisRGB(255,255,255), "Days Graphics Library");
      velosisPrint(screen, tfont, 10, 580, velosisRGB(255,255,255), "Version 0-0-1-6");
      velosisUpdate(screen);
    }
    velosisFree(screen);
    return 0;
}
