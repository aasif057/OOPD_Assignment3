#ifndef PLATFORM_H
#define PLATFORM_H

// Base Platform class
class Platform {
public:
    // Pure virtual function to get stoppage interval
    virtual int getStoppageInterval() const = 0;
    
    // Pure virtual function to set stoppage interval
    virtual void setStoppageInterval(int interval) = 0;
    
    // Virtual destructor
    virtual ~Platform() {}
};

// Derived StoppagePlatform class (can accommodate stoppages)
class StoppagePlatform : public Platform {
public:
    // Constructor taking stoppage interval as argument
    StoppagePlatform(int interval);

    // Overridden function to get stoppage interval
    int getStoppageInterval() const override;

    // Overridden function to set stoppage interval
    void setStoppageInterval(int interval) override;

private:
    int stoppageInterval;  // Stores the stoppage interval
};

#endif
