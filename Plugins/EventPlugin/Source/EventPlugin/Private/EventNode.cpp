#include "EventNode.h"

FEventNode::FEventNode() {
    this->ID = 0;
    this->NodeType = EEventNodeType::None;
    this->ActorSubject = EEventActorType::None;
    this->ActorTarget = EEventActorType::None;
    this->DialogueWave = NULL;
}

