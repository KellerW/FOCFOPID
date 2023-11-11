#include "pid.hpp"

void pid::set_p_gain(double p)
{
    p_gain = p;
}
void pid::set_i_gain(double i)
{
    i_gain = i;
}
void pid::set_d_gain(double d)
{
    d_gain = d;
}
double pid::get_p_gain(void)
{
    return p_gain;
}
double pid::get_i_gain(void)
{
    return i_gain;
}
double pid::get_d_gain(void)
{
    return d_gain;
}
double pid::calcPID(const double set, double err) 
{
    setPoint = set;
    error = err;
    return (setPoint - error);
}
            


