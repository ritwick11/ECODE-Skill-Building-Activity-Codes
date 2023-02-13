#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
    public :
        void testLxCorrelation(void)
        {
            double L[] = {1.135, 1.130, 1.125,1.120, 1.115, 1.110};
            double x[] = {0.00000407766, 0.0000040506, 0.00000401063, 0.00000399145, 0.00000397759, 0.00000393889};

            double coeff = GetPearsonCorrelationCoefficient(L, x, 6);
            TS_ASSERT_DELTA(coeff, 0.990535, 1e-6);
            TS_TRACE("Lx Correlation Test");
        }

        void testRxCorrelation(void)
        {
            double R[] = {1.125386, 1.124346, 1.123311, 1.12228, 1.121253, 1.1202312};
            double x[] = {0.00000407766, 0.0000040506, 0.00000401063, 0.00000399145, 0.00000397759, 0.00000393889};

            double coeff = GetPearsonCorrelationCoefficient(R, x, 6);
            TS_ASSERT_DELTA(coeff, 0.990658, 1e-6);
            TS_TRACE("Rx Correlation Test");
        }

        void testkxCorrelation(void)
        {
            double x[] = {0.00000407766, 0.0000040506, 0.00000401063, 0.00000399145, 0.00000397759, 0.00000393889};
            double k[6];
            double F = 3000;

            for (int i = 0; i < 6; ++i)
            {
                k[i] = GetStiffnessCoefficient(F, x[i]);
            }

            double assert_k[] = {735716072.5, 740631017.6, 748012157.7, 751606559, 754225548.6, 761635892.3};
            double coeff = GetPearsonCorrelationCoefficient(k, x, 6);
            
            for (int i = 0; i < 6; ++i)
            {
                TS_ASSERT_DELTA(assert_k[i], k[i], 1);
            }

            TS_ASSERT_DELTA(coeff, -0.999941, 1e-6);
            TS_TRACE("kx Correlation Test");
        }

        void testStiffnessCoefficient(void)
        {
            double F = 5671;
            double x = 0.00000984256;

            double k = GetStiffnessCoefficient(F, x);
            
            TS_ASSERT_DELTA(k, 576171240.4, 1);
            TS_TRACE("Stiffness Coefficient Calculation Test");

        }

        void testMeanCalculation(void)
        {
            double v[] = {226, 385, 920, 831, 669, 766, 706, 209, 4510, 397, 449, 972, 714, 842};

            double mean = GetMean(v, 14);
            
            TS_ASSERT_DELTA(mean, 899.7142, 1e-3);
            TS_TRACE("Mean Calculation Test");
        }
};

