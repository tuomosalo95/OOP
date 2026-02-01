#ifndef PANKKITILI_H
#define PANKKITILI_H

class pankkitili
{
public:
    pankkitili();

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double getBalance() const;

protected:
    double balance;
};

#endif // PANKKITILI_H
