class Solution {
public:
    int mirrorReflection(int p, int q) {
        int y_tot = 0; // total y distance traveled
        
        bool left = true; // keeps track of what wall it last hit
        
        for (;;) {
            y_tot += q; // increase the y-axis distance the beam has traveled
            
            left = !left; // flip the wall it last hit every time the beam hits the wall
            
            /* If the y_tot is a multiple of p, the beam hit a corner.  */
            if (y_tot % p == 0) {
                
                /* Determines which corner it hit, e.g. 0 or 1.  */
                bool even = ((y_tot / p) % 2 == 0);
                
                /* We hit a right corner, if it's an even corner, it hit 0.  
                 * If it's an odd corner, we hit 1.
                 */
                if (left == false) {
                    return (even ? 0 : 1);
                } else {
                    /* If we hit a left corner, it actually has to be the corner without
                     * the reflector.  Otherwise, we would have hit corner 1 before we hit 
                     * the emitter.
                     */
                    if (even == false) {
                        return 2;
                    } else {
                        /* Never reaches here, but added here for illustrative purposes.  */
                        return 3;
                    }
                }
            }
        }
    }
};