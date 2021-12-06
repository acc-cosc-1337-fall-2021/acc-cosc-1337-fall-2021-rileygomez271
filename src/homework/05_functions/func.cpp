//add include statements here
#include "func.h"


//add function code here
double get_gc_content(const string& dna)
{
    double value = 0;
    double ratio = 0.0;

    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            value += 1;
        }

    }

    return value/(dna.length());

}

string get_reverse_string(string dna)
{
    string reverse = "";
    for (int i = dna.length()-1; i >= 0; i--)
    {
        reverse = reverse + dna[i];
    }
    return reverse;

}

string get_dna_complement(string dna)
{
    string reverse;
    reverse = get_reverse_string(dna);
    for (int i = 0; i < reverse.length(); i++)
    {
        if (reverse[i] == 'A')
        {
            reverse[i] = 'T';
        }
        else if (reverse[i] == 'G')
        {
            reverse[i] = 'C';
        }
        else if (reverse[i] == 'T')
        {
            reverse[i] = 'A';
        }
        else
        {
            reverse[i] = 'G';
        }


    }

    return reverse;

}