#include "HourReporter.h"
#include "PayCalculator.h"

class EmployeeFacade
{
    public:
        HourReporter HourReporter;
        PayCalculator PayCalculator;

        EmployeeFacade();
        ~EmployeeFacade();
};
