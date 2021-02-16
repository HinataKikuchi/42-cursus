#include <stdio.h>
 
// enumŒ^‚Ì’è‹`
enum week {
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat,
  Sun
};
 
int main(void) {
    // enumŒ^‚ÌéŒ¾
    enum week wk0, wk1, wk2;
    
    // enumŒ^‚Ìƒƒ“ƒo‚ğ‘ã“ü
    wk0 = Mon;
    wk1 = Tue;
    wk2 = Wed;
    
    printf("Mon‚Ì’l‚Í: %d\n", wk0);
    printf("Tue‚Ì’l‚Í: %d\n", wk1);
    printf("Wed‚Ì’l‚Í: %d\n", wk2);
    
    return 0;
}

namespace aaa {
  enum A {
    AAA,
    BBB,
    CCC
  };
}

namespace bbb {
  enum B {
     CCC,
     DDD,
     EEE
  };
}

void foo() {
  aaa::AAA // OK
  aaa::CCC // OK.
}

using namespace std;
 
main2()
{
   enum
   {
      monday, tuesday, wednesday, thursday, friday, saturday, sunday
   } day;
 
   day = wednesday;
 
   if(day == saturday || day == sunday)
      cout << "Day is a weekend day" << endl;
   else if(day == wednesday)
      cout << "Day is hump day - middle of the work week" << endl;
}

main3()
{
   typedef enum
   {
      thirteen = 10,
      fourteen,
      fifteen,
      sixteen,
      seventeen,
      eighteen,
      nineteen
   } TEENS;
 
   TEENS teen = seventeen;
 
   if(teen == seventeen)
      cout << seventeen << endl;
}

class Day
{
public:
   enum Enum
   {
      sunday = 0,
      monday,
      tuesday,
      wednesday,
      thursday,
      friday,
      saturday,
      InvalidDay
   };
 
   // Constructors
   Day(void);
   Day(Enum ee);
   explicit Day(const std::string& ss);
 
   // Overloaded assignment operators
   Day& operator = (const Day& cc);
   Day& operator = (const std::string& ss);
   Day& operator = (Enum ee);
 
   // Overloaded comparison operators
   bool operator<  (const Day& cc) const;
   bool operator<  (Enum ee) const;
   bool operator<= (const Day& cc) const;
   bool operator<= (Enum ee) const;
   bool operator>  (const Day& cc) const;
   bool operator>  (Enum ee) const;
   bool operator>= (const Day& cc) const;
   bool operator>= (Enum ee) const;
   bool operator== (const Day& cc) const;
   bool operator== (const std::string& ss) const;
   bool operator== (const Enum ee) const;
   bool operator!= (const Day& cc) const;
   bool operator!= (const std::string& ss) const;
   bool operator!= (const Enum ee) const;
 
   // Accessor functions
   inline std::string getString (void) const;
   inline Enum        getEnum   (void) const;
   inline int         getValue  (void) const;
 
private:
   // Static functions
   static Enum        fromString(std::string ss);
   static std::string toString(Enum ee);
   static int         toValue(Enum ee);
 
   // Data members
   Enum        m_enum;
   std::string m_string;
   int         m_value;
};
 
inline std::ostream& operator<< (std::ostream& _os, const Day& _e)
{
   _os << _e.getString();
   return _os;
}
 
inline std::string Day::getString(void) const
{
   return m_string;
}
 
Day::Enum Day::getEnum(void) const
{
   return m_enum;
}
 
int Day::getValue(void) const
{
   return m_value;
}
#endif


typedef enum
{
   monday, tuesday, wednesday, thursday, friday, saturday, sunday
} Day;
 
const char *day_str[]={ "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday", "Sunday" };
 
using namespace std;
 
main4()
{
   Day day = saturday;
 
   if(day == saturday || day == sunday)
      cout << day_str[day] << endl;
}

// Constructors
Day::Day(void) :
   m_enum(sunday),
   m_string("Sunday"),
   m_value(0)
{}
 
Day::Day(Enum _e) :
   m_enum(_e),
   m_string(toString(_e)),
   m_value(0)
{}
 
Day::Day(const std::string& _s) :
   m_enum(fromString(_s)),
   m_string(_s),
   m_value(toValue(m_enum))
{}
 
// Assignment operators
 
Day& Day::operator= (const Day& _c)
{
   m_string = _c.m_string;
   m_enum   = _c.m_enum;
   m_value  = _c.m_value;
   return *this;
}
 
Day& Day::operator= (const std::string& _s)
{
   m_string = _s;
   m_enum   = fromString(_s);
   m_value  = toValue(m_enum);
   return *this;
}
 
Day& Day::operator= (Enum _e)
{
   m_enum   = _e;
   m_string = toString(_e);
   m_value  = toValue(_e);
   return *this;
}
 
bool Day::operator< (const Day& _c) const
{
   return (m_value < _c.m_value);
}
 
bool Day::operator< (Enum _e) const
{
   return (m_value < toValue(_e));
}
 
bool Day::operator<= (const Day& _c) const
{
   return (m_value <= _c.m_value);
}
 
bool Day::operator<= (Enum _e) const
{
   return (m_value <= toValue(_e));
}
 
bool Day::operator> (const Day& _c) const
{
   return (m_value > _c.m_value);
}
 
bool Day::operator> (Enum _e) const
{
   return (m_value > toValue(_e));
}
 
bool Day::operator>= (const Day& _c) const
{
   return (m_value >= _c.m_value);
}
 
bool Day::operator>= (Enum _e) const
{
   return (m_value >= toValue(_e));
}
 
bool Day::operator== (const Day& _c) const
{
   return (m_enum == _c.m_enum);
}
 
bool Day::operator== (const std::string& _s) const
{
   return (m_string == _s);
}
 
bool Day::operator== (const Enum _e) const
{
   return (m_enum == _e);
}
 
bool Day::operator!= (const Day& _c) const
{
   return (m_enum != _c.m_enum);
}
 
bool Day::operator!= (const std::string& _s) const
{
   return (m_string != _s);
}
 
bool Day::operator!= (const Enum _e) const
{
   return (m_enum != _e);
}
 
Day::Enum Day::fromString(std::string _s)
{
   // Case insensitive - make all upper case
   transform(_s.begin(), _s.end(), _s.begin(), toupper);
   if(_s == "SUNDAY")         return sunday;
   else if(_s == "MONDAY")    return monday;
   else if(_s == "TUESDAY")   return tuesday;
   else if(_s == "WEDNESDAY") return wednesday;
   else if(_s == "THURSDAY")  return thursday;
   else if(_s == "FRIDAY")    return friday;
   else if(_s == "SATURDAY")  return saturday;
 
   throw std::range_error("Not a valid Day value: " + _s);
   return InvalidDay;
};
 
std::string Day::toString(Day::Enum _e)
{
   switch (_e)
   {
      case sunday:    { return "SUNDAY";    }
      case monday:    { return "MONDAY";    }
      case tuesday:   { return "TUESDAY";   }
      case wednesday: { return "WEDNESDAY"; }
      case thursday:  { return "THURSDAY";  }
      case friday:    { return "FRIDAY";    }
      case saturday:  { return "SATURDAY";  }
   }
   return "InvalidDay";
}
 
int Day::toValue(Day::Enum _e)
{
   switch (_e)
   {
      case sunday:    { return 0; }
      case monday:    { return 2; }
      case tuesday:   { return 3; }
      case wednesday: { return 4; }
      case thursday:  { return 5; }
      case friday:    { return 6; }
      case saturday:  { return 7; }
   }
   return 8;  // Invalid
}