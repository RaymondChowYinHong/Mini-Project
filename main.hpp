//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

//This hpp conatins all the function prototype

//register and login system
int LOGIN_REGISTER ();
void Register();
bool IsloggedIn();

// display tittle and main menu
void display_tittle();
void display_menu();

//medicine
void display_medicine_menu();
double Calc_medicine_charge(double , int, int &, double &);

//surgery
void display_surgery_menu();
double Calc_surgery_charge(double , int, int &, double &);

//service
void display_service_menu();
double Calc_service_charge(double , int, int &, double &);

//hospital stay
void display_hospitalstay_menu();
double Calc_hospitalstay_charge(double, int, int &, double &);

//food drink
void display_fooddrink_menu();
double Calc_fooddrink_charge(double , int, int &, double &);

// list out patient item and total charge
void Display_patient_item(int, int, double, size_t);
double Calc_Total_Charge(double , double , double , double , double );

//check patient
void display_checkpatient_menu();
int Check_new_patient();
