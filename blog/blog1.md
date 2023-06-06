# Async queries with FastAPI and SQLAlchemy 2.0

### Requirements

- Python 3.8+
- Poetry

```python
@router.get("/{id}")
async def get_user_by_id(id: int, db: AsyncSession = Depends(get_db)):
    user = await db.scalars(select(User).filter(User.id == id))
    user = user.first()
    if not user:
        raise HTTPException(
            status_code=status.HTTP_404_NOT_FOUND,
            detail=f"user with id: {id} not found in db",
        )
    return user
```
