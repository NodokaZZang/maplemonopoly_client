#pragma once
class Room
{
private:
	int			 m_sq;								// ���ȣ
	WCHAR		 m_title[20] = L"";					// ����
	WCHAR		 m_regBy[15] = L"";					// ����	
	WORD		 m_regById = 0;						// ���� USER ID
	int			 m_joinCount = 0;					// �ο�
	Roomstatus   m_status = HOLD;					// ����
public:
	Room(int _sq, WCHAR* _title, WCHAR* _regBy, int _joinCount) : m_sq(_sq), m_joinCount(_joinCount) { wcscpy_s(m_title, _title); wcscpy_s(m_regBy, _regBy); };
	Room() {};
	Room(Room* _room);
	~Room() {};

	WCHAR*		 GetTitle() { return m_title; }
	WCHAR*		 GetRegBy() { return m_regBy; }
	int			 GetjoinCount() { return m_joinCount; }
	int			 GetSq() { return m_sq; }
	Roomstatus   GetStatus() { return m_status; }
	void		 SetTitle(WCHAR* _title) { wcscpy_s(m_title, _title); }
	void		 SetTitle(WCHAR* _title, int _size) { memcpy(m_title, _title, _size); }
	
	void		 SetRegBy(WCHAR* _regBy) { wcscpy_s(m_regBy, _regBy); }
	void		 SetRegBy(WCHAR* _regBy, int _size) { memcpy(m_regBy, _regBy, _size); }

	void		 SetJoinCount(int _count) { m_joinCount = _count; }
	int			 GetRegID() { return m_regById; }
	void		 SetRegID(int _id) { m_regById = _id; }
	void		 SetRoomSq(int _roomSq) { m_sq = _roomSq; }
};
