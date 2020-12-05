#include "Teacher.h"
Teacher::Teacher(): fio("-"), groups(0),labs(0), subject("-"), curLabs(0){}
Teacher::Teacher(string f, int g, int l, string s, int cl) : fio(f), groups(g), labs(l), subject(s), curLabs(cl) {}
void Teacher::set_fio(string f)
{
	fio = f;
}
void Teacher::set_groups(int g)
{
	groups = g;
}
void Teacher::set_labs(int l)
{
	labs = l;
}
void Teacher::set_subject(string s)
{
	subject = s;
}
void Teacher::set_curLabs(int cl)
{
	curLabs = cl;
}
string Teacher::get_fio()
{
	return fio;
}
int Teacher::get_groups()
{
	return groups;
}
int Teacher::get_labs()
{
	return labs;
}
string Teacher::get_subject()
{
	return subject;
}
int Teacher::get_curLabs()
{
	return curLabs;
}
ostream& operator<<(ostream& out, const Teacher t)
{
	out << "\nFull name - " << t.fio << "\nNumber of groups - " << t.groups << "\nNumber of labs per subject - " << t.labs << "\nSubject - " <<t.subject<< "\nNumber of current labs - " <<t.curLabs<<endl;
	return out;
}
istream& operator>>(istream& in, Teacher& t)
{
	in >> t.fio;
	in >> t.groups;
	in >> t.labs;
	in >> t.subject;
	return in;
}
bool operator==(Teacher t1,Teacher t2) {
	if (t1.labs - t1.curLabs == t2.labs - t2.curLabs)
		return true;
	else 
		return false;
}
bool operator<(const Teacher t1, const Teacher t2)
{
	if (t1.labs - t1.curLabs < t2.labs - t2.curLabs)
		return true;
	else
		return false;
}
bool operator>(const Teacher t1, const Teacher t2)
{
	if (t1.labs - t1.curLabs > t2.labs - t2.curLabs)
		return true;
	else
		return false;
}