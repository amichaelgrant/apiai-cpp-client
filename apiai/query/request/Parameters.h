#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <memory>
#include <vector>
#include <string>

#include "Entity.h"

namespace ai {
    namespace query {
        namespace request {
            class Parameters
            {
            public:
                Parameters(std::string sessionId,
                           bool resetContexts = false,
                           std::shared_ptr<std::string> timeZone = nullptr,
                           std::vector<std::string> contexts = {},
                           std::vector<Entity> entities = {});

            public:
                Parameters& setResetContexts(bool resetContexts);
                Parameters& setTimeZone(std::shared_ptr<std::string> timeZone);
                Parameters& addContext(std::string context);
                Parameters& addEntity(Entity entity);

                bool getResetContexts() const;
                std::string getSessionId() const;
                std::shared_ptr<std::string> getTimeZone() const;
                std::vector<std::string> getContexts() const;
                std::vector<Entity> getEntities() const;

            private:
                bool resetContexts;
                std::string sessionId;
                std::shared_ptr<std::string> timeZone;
                std::vector<std::string> contexts;
                std::vector<Entity> entities;
            };
        }
    }
}

#endif // PARAMETERS_H
