#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Model.h"

class GameObject
{
public:
	GameObject(Model* model_, vec3 position_ = vec3());
	~GameObject();

	void Update(const float deltaTime_);
	void Render(Camera* camera_);

	inline vec3 GetPosition() const { return position; }
	inline float GetAngle() const { return angle; }
	inline vec3 GetRotation() const { return rotation; }
	inline vec3 GetScale() const { return scale; }
	inline string GetTag() const { return tag; }
	inline BoundingBox GetBoundingBox() const { return boundingBox; }
	inline bool GetHit() const { return hit; };

	void SetPosition(vec3 position_);
	void SetAngle(float angle_);
	void SetRotation(vec3 rotation_);
	void SetScale(vec3 scale_);
	void SetTag(string tag_);
	void SetHit(bool hit_, int buttonType_);
	
private:
	Model* model;
	unsigned int modelInstance;
	vec3 position;
	float angle;
	vec3 rotation;
	vec3 scale;
	string tag;

	BoundingBox boundingBox;

	bool hit;
};

#endif // !GAMEOBJECT_H