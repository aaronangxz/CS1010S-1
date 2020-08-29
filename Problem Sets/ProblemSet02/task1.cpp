#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

struct HSL {
    int hue;
    int sat;
    int lum;
};

// *** Do not edit above this line. ***
// Only copy this function into Coursemology
HSL rgb_to_hsl(int red, int green, int blue) {
    int hue, sat, lum;  // assign the correct values to these variables
    // Your answer here.

    //Declare variables for R', G', B', Cmax, Cmin, Raw values of HSL, Range & Total of Luminous, 2 - total
    double red1, green1, blue1, cmax, cmin, hue_raw, sat_raw, lum_raw, lum_range, lum_total, lum_2_minus_maxmin = 0;

    //Obtain ' values by dividing 255.0, output double
    red1 = red / 255.0;
    green1 = green / 255.0;
    blue1 = blue / 255.0;

    //Track current values (Optional)
    printf("RGB is %d,%d,%d\n",red,green,blue);
    printf("R'G'B' is %f,%f,%f\n",red1,green1,blue1);

    //---Obtain Cmax among R'G'B' values ---//
    if ((red1 >= green1) && (red1 >= blue1))
    {
        cmax = red1;
    }
    else if ((green1 >= red1) && (green1 >= blue1))
    {
        cmax = green1;
    }
    else if ((blue1 >= red1) && (blue1 >= green1))
    {
        cmax = blue1;
    } 
    // -------------------------------------//

     //---Obtain Cmin among R'G'B' values --//
    if ((red1 <= green1) && (red1 <= blue1))
    {
        cmin = red1;
    }
    else if ((green1 <= red1) && (green1 <= blue1))
    {
        cmin = green1;
    }
    else if ((blue1 <= red1) && (blue1 <= green1))
    {
        cmin = blue1;
    } 
    // -------------------------------------//

    printf("Cmax Cmin is %f,%f\n",cmax,cmin);
    
    // Compute Luminance Range;
    lum_range= cmax - cmin;
    printf("Lum range is %f\n",lum_range);
    // Compute Total Luminance;
    lum_total = cmax + cmin;
    // Compute 2 - (Max + Min)
    lum_2_minus_maxmin = 2 - lum_total;
    // Compute Lightness
    lum_raw = lum_total / 2.0;
    //Round up lightness
    lum = round(lum_raw * 100);

    printf("LUM RAW is %f\n",lum_raw);
    printf("Lum is %d\n",lum);

    //Compute Saturation RAW (Before rounding up & times 100%)
    if (cmax == cmin)
    {
        sat = 0;
    }
    else
    {
        if (lum_raw < 0.5)
        {
            sat_raw = (cmax-cmin) / (cmax + cmin);
        }
        if (lum_raw >= 0.5)
        {
            sat_raw = (cmax - cmin) / (2 - cmax - cmin);
        }
        printf("SAT RAW is %f\n",sat_raw);
        //Round up Saturation, * 100%
        sat = round( sat_raw * 100);
    }
    
    //Compute Hue RAW (Before rounding up & times 60%)
    if (cmax == cmin)
    {   hue = 0;
    }
    else
    {
        if (cmax == red1)
        {
            hue_raw = ((green1 - blue1) / lum_range);
        }
        else if (cmax == green1)
        {
            hue_raw = ((blue1 - red1) / lum_range) + 2;
        }
        else if (cmax == blue1)
        {
            hue_raw = ((red1 - green1) / lum_range) + 4;
        }
    }
    
    //Round up hue, * 60%
    hue = round(hue_raw * 60);
    printf("HUE RAW is %f\n",hue_raw);
    
    //Determine if hue is a negative value
    if (hue < 0)
    {
        hue = hue + 360;
    }
    else
    {
        hue = hue;
    }
    // *** Do not edit this line. It is to return 3 values together ***
    return (HSL){.hue=hue, .sat=sat, .lum=lum};
}

int main() {
    // edit these RGB values to test
    int red = 24;
    int green = 98;
    int blue = 118;
    
    HSL hsl = rgb_to_hsl(red, green, blue);
    printf("The result is Hue:%d, Sat:%d, Lum:%d\n", hsl.hue, hsl.sat, hsl.lum);

    return 0;
}