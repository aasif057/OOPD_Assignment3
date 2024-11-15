#ifndef PLATFORM_H
#define PLATFORM_H

// Base Platform class
class Platform {
public:
    // Pure virtual function to get stoppage interval
    virtual int getStoppageInterval() const = 0;
    
    // Virtual destructor
    virtual ~Platform() {}
};

// Derived StoppagePlatform class (can accommodate stoppages)
class StoppagePlatform : public Platform {
public:
    StoppagePlatform();  // Default constructor
    int getStoppageInterval() const override;  // 30 minutes stoppage interval
};

// Derived ThroughPlatform class (can accommodate through trains)
class ThroughPlatform : public Platform {
public:
    ThroughPlatform();  // Default constructor
    int getStoppageInterval() const override;  // 10 minutes through train interval
};

#endif
