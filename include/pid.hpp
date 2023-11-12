#ifndef PID_HPP
#define PID_HPP

class pid
{
    private:
        double error = 0;
        mutable double setPoint = 0;
        double p_gain = 0;
        double i_gain = 0;
        double d_gain = 0;
    public:
        pid(double p, double i, double d)
        {
            p_gain = p;
            i_gain = i;
            d_gain = d; 
        }

        ~pid()
        {

        }

        double calcPID (const double set, double err) ;
        void set_p_gain(double p);
        void set_i_gain(double i);
        void set_d_gain(double d);

        double get_p_gain(void);
        double get_i_gain(void);
        double get_d_gain(void);
};
#endif
