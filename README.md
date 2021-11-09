# MSP430_TumHiHo_song
Upload <<tumhiho.c>> into MSP430 and connect it up like in <<circuit design.png>> file

By controlling the frequency at which the output Pins of MSP430 are turned off and on, we can make music. This mini-project demonstrates how to plug msp430 to a speaker and make it since Tum Hi Ho (an Indian song)

# GENRAL DESCRIPTION:

    • Music is generally analog sinusoidal waves
    
    • But since we cannot create sine waves using digital microcontroller, we use an alternative square wave. 
    
    • The switch is to give a start signal to the micro controller
    
    • The micro controller produced music by toggling output according to the required frequency
    
    • The frequency of the required note is obtained from the music sheet
    
    • The micro controller uses its “up/down” timmer mode
    
    • CCR0 value is made as threshold and CCR1 value is the max limit
    
    • Whenever the value of CCR1 crosses CCR0 value, the timmer interrupt is called
    
    • Timmer interrupt is made such that it toggles the output
    
    • Thus we get a 50% duty cycle output for our respective frequency
    
    • The resistance of the speaker is a mere 8 ohm
    
    • Thus to match the impedance and to give the maximum amplified output to the speaker, we use a darlington pair amplifier IC - L293d.
    
    • Different frequencies with their respective timing in the software.
    
    • Thus we get the required song output.

# IMPLEMENTATIONS:
    
    • This mini project shows how to control frequency variation using a micro controller.
    
    • This can be implemented in non-coherent detection where the local oscillator has to auto tune to the required frequency.
    
    • This also acts as the base for voltage controlled oscillator
    
    • By adding filters and reverse engineering, we can use it as a frequency detector
    
# CIRCUIT DIAGRAM:
    
![circuit design](https://user-images.githubusercontent.com/49431830/140953821-2f4e77ca-dd2b-4598-a14c-cc2c0b73ed9c.jpg)

# MANUSCRIPT:    
   
![mini project - music using micro controller(tum hi ho)](https://user-images.githubusercontent.com/49431830/140953327-15c1bdb6-d242-4970-a637-49645ae40cb8.jpg)

# CONCLUSION:

• The mini project helps us gain knowledge in frequency control which has in depth implication in wireless technology and tuning.



