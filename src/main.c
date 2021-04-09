#include <tice.h>
#include <graphx.h>
#include <stdint.h>

int main(void) {
    char position[4], scaleStr[2], input[99];
    int num;
    real_t real, real2;
    os_ClrHome();
    os_GetStringInput("String: ",input,-1);
    os_ClrHome();
    os_PutStrLine("String: ");
    os_PutStrLine(input);
    for (uint8_t i = 1; i < 10; i++) {
        gfx_SetTextScale(i,1);
        num = 160 - gfx_GetStringWidth(input) / 2;
        real = os_FloatToReal(num);
        real2 = os_FloatToReal(i);
        os_RealToStr(position, &real, 8, 1, 0);
        os_RealToStr(scaleStr, &real2, 8, 1, 0);
        if (num < 161 && num > -1) {
            boot_NewLine();
            os_PutStrLine(scaleStr);
            os_PutStrLine(": ");
            os_PutStrLine(position);
        }
    }
    while (!os_GetCSC());
    return 0;
}
