#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <string>

class entity {
public:
    entity();
    virtual ~entity();

    entity *next();
    virtual void render();
    virtual void render_fade_in();
    virtual void fade_start();
    virtual void update();
    virtual std::string type();

protected:
    std::string entity_type_;

private:
    entity *next_;
};

void entity_update();
void entity_init();
entity *entity_find_type(std::string const &type, entity *start);
void entity_term();
void entity_render();
void entity_render_fade_in();
void entity_fade_start();

#endif
