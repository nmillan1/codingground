#define DOLLARS_PER_POUND  1.96109
#define DOLLARS_PER_KRONOR 0.15794
#define DOLLARS_PER_EURO   1.46785
#define DOLLARS_PER_RUBLE  0.04067

// displays a suitable greeting to the user
void PrintGreeting (void);

// displays the main menu choices
void DisplayMainMenu (void); 

// displays the location menu choices
void DisplayLocationsMenu (void); 

// a high level function that handles all of the user input, processing, and output dealing with converting time.
void ConvertTime (void); 

// a high level function that handles all of the user input, processing, and output dealing with converting currency.
void ConvertCurrency (void); 

// a high level function that handles all of the user input, processing, and output dealing with converting temperature.
void ConvertTemp (void);

// changes the hour (24-hour clock) passed in by the amount of the adjustment yeilding Eastern Time in 24-hour form
int ForeignTimeToEastern (int hour, int adjustment); 

// receives a time in 24-hour form and prints out that time in 12-hour form with AM or PM.
void PrintAMPMForm (int hour, int minutes); 

// accepts the number of units of a foreign currency and a conversion factor and returns the equivalent number of US dollars.
float ForeignToDollars (float units, float conv);  

// returns the fahrenheit equivalent of the celsius temperature passed in.
double CelsiusToFahrenheit (double celsius); 

// gets an integer from the user between min and max, inclusive and returns that valid integer. 
int GetValidInt(int min, int max);  