#ifndef PLATFORM_H
#define PLATFORM_H

// Base Platform class
class Platform {
public:
    virtual int getStoppageInterval() const = 0;
    virtual ~Platform() {}
};

// StoppagePlatform class (for regular trains)
class StoppagePlatform : public Platform {
public:
    StoppagePlatform(int interval);
    int getStoppageInterval() const override;

private:
    int stoppageInterval;  // Typically 30 minutes for regular trains
};

// ThroughPlatform class (for through trains)
class ThroughPlatform : public Platform {
public:
    ThroughPlatform();
    int getStoppageInterval() const override;
};

#endif
