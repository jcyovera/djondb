#ifndef UPDATECOMMAND_H
#define UPDATECOMMAND_H

#include "command.h"
#include "bson.h"

class UpdateCommand: public Command {
    public:
        UpdateCommand();

        virtual ~UpdateCommand();
        UpdateCommand(const UpdateCommand& orig);


        virtual void execute();
        virtual void* result();
        virtual void writeResult(OutputStream* out) const;

        void setNameSpace(const std::string ns);
        const std::string* nameSpace() const;
        void setBSON(const BSONObj bson);
        BSONObj* bson() const;
    private:
        const std::string* _namespace;
        BSONObj* _bson;

};

#endif // UPDATECOMMAND_H