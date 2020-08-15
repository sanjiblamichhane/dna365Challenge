class throttle //defining the class
{
    //prototype
    public:
        //MODIFICATION MEMBER FUNCTIONS
        void shut_off():
        void shift (int amount);
        //CONSTANT MEMBER FUNCTIONS
        double flow() const; //using const keyword tells the compiler and other programers that the function cannot change the object.
        bool is_on() const;
    private: // this means only programmer who implements the throttle class can access this member
        int position;
};

throttle my_throttle;
throttle control;

control.shut_off();
control.shift(3);