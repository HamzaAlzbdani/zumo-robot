class gear_selector {
void neutral() {
state = &gear_selector::reverse;
}

void drive() {
}

void reverse(){
}

void (gear_selector::* state)();

public:
gear_selector() : state(&gear_selector::neutral) {}

void init() {

}

void pool() { (this->*state)(); }

//gear_t _selected() { return _selected; }

}gear;
