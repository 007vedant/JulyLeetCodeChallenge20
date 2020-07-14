class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12)
            hour = 0;
        if(minutes == 60){
            minutes = 0;
            hour += 1;
            if(hour > 12)
                hour -= 12;
        }
        
        double h_angle = 0.5*(60*hour + minutes);
        double m_angle = 6*(minutes);
        
        double angle = abs(h_angle - m_angle);
        
        double ans = min(angle, 360-angle);
        
        return ans;
    }
};