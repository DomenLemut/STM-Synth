#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void sendNote(int note);
    void sendState(int state);
    void updateString(const char* newString);
protected:
    ModelListener* modelListener;
    int newnote = 0;
    int newstate = 0;
    const char* currentString;
};

#endif // MODEL_HPP
