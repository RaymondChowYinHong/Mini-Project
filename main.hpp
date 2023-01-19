//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011
void display_tittle();
void display_menu();

void display_medcine_menu();
double Calc_medcine_charge(double , int, int &, double &);

void display_surgery_menu();
double Calc_surgery_charge(double , int, int &, double &);

void display_service_menu();
double Calc_service_charge(double , int, int &, double &);

void display_hospitalstay_menu();
double Calc_hospitalstay_charge(double, int, int &, double &);

void display_fooddrink_menu();
double Calc_fooddrink_charge(double , int, int &, double &);

void Display_patient_item(int, int, double, size_t);
double Calc_Total_Charge(double , double , double , double , double );

void display_checkpatient_menu();
int Check_new_patient();
