#include <stdio.h>
#include <math.h>
#include "bitmap.h"

// Determines Pearson’s correlation coefficient for two sets of values

double GetPearsonCorrelationCoefficient(double* x, double* y, int len)
{
    double meanX=0,meanY=0,correl1=0,correl2=0,correl3=0,correl;
   
        meanX=GetMean(x,len);
        meanY=GetMean(y,len);
    
    

    for(int i=0;i<len;++i){
        correl1=((x[i]-meanX)*(y[i]-meanY))+correl1;
        correl2=((x[i]-meanX)*(x[i]-meanX))+correl2;
        correl3=((y[i]-meanY)*(y[i]-meanY))+correl3;
    }
    correl=(correl1/((sqrt(correl2))*(sqrt(correl3))));


    return correl;


	
}

// Obtains mean of values passed to it

double GetMean(double* x, int len)
{
    double meanX=0;
	 for(int i=0;i<len;++i){
        meanX=meanX+x[i];
    }
    meanX=(meanX/len);
    return meanX;
}

//Determines the stiffness coefficient.
double GetStiffnessCoefficient(double force, double displacement)
{
	double stiffCo;
    stiffCo=(force/displacement);

    return stiffCo;
}

