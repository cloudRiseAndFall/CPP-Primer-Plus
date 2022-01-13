#ifndef TTSENVEN_H_
#define TTSENVEN_H_

class Plorg
{
private:
    char name[19];
    int ci;
public:
    Plorg();
    Plorg(char name[], int ci);
    ~Plorg();
    void setCI(int ci);
    void show() const;
};

#endif